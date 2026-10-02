# LAB 4

## Plan for average.cpp

I will create five double variables containing the assigned values. I will add the five values together and store the result in `sum`. Then I will divide `sum` by 5 and store the result in `average`. Finally, I will display the sum and average.

## Plan for ocean_levels.cpp

I will create a named constant for the 1.5 mm annual ocean rise and variables for 5, 7, and 10 years. I will multiply the annual rate by each number of years and store each result in a separate variable. Then I will display the three results with labels and units.






## 4. Test your programs


### Average program tests

For the assigned values, the expected sum is:

28 + 32 + 37 + 24 + 33 = 154

The expected average is:

154 / 5 = 30.8

The program produced a sum of 154 and an average of 30.8, which matched the expected results. No corrections were needed.

For the second test, I temporarily changed the values to 10, 20, 31, 40, and 50. The expected sum was 151 and the expected average was 30.2. The program produced a sum of 151 and an average of 30.2, which matched the expected results. No corrections were needed.


### Ocean-level tests

Using the assigned rate of 1.5 millimeters per year, the expected increases were:

* 5 years: 7.5 millimeters
* 7 years: 10.5 millimeters
* 10 years: 15 millimeters

The program produced these same results, so no corrections were needed.

For the second test, I temporarily changed the annual rate to 2.3 millimeters per year. The expected increases were:

* 5 years: 11.5 millimeters
* 7 years: 16.1 millimeters
* 10 years: 23 millimeters

The program produced these same results, so no corrections were needed.


### Test results

| Program and test          | Values used        | Expected results                                    | Actual results                                      | Match or correction  |
| ------------------------- | ------------------ | --------------------------------------------------- | --------------------------------------------------- | -------------------- |
| Average — assigned values | 28, 32, 37, 24, 33 | Sum: 154; Average: 30.8                             | Sum: 154; Average: 30.8                             | Match; no correction |
| Average — changed values  | 10, 20, 31, 40, 50 | Sum: 151; Average: 30.2                             | Sum: 151; Average: 30.2                             | Match; no correction |
| Ocean — assigned rate     | 1.5 mm/year        | 5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm  | 5 years: 7.5 mm; 7 years: 10.5 mm; 10 years: 15 mm  | Match; no correction |
| Ocean — changed rate      | 2.3 mm/year        | 5 years: 11.5 mm; 7 years: 16.1 mm; 10 years: 23 mm | 5 years: 11.5 mm; 7 years: 16.1 mm; 10 years: 23 mm | Match; no correction |

After testing, I restored the assigned values and rate and completed the final runs of both programs.






## 5. Explain your code

### Why should the five values and the average use the `double` data type?

I used `double` because the values and their average can contain decimals. Even though the five assigned values are whole numbers, using `double` makes sure the program can still handle decimal values if they are changed.


### Trace the assigned values through `sum` and `average`.

The five values are 28, 32, 37, 24, and 33. The program adds them together and stores the result in `sum`, which gives 154. Then, `sum` is divided by 5 and the result is stored in `average`, which gives 30.8.


### Why should the average calculation divide the completed sum rather than only the final value?

The average needs to use all five values, so they have to be added together first. Dividing only the final value would leave out the other four values and would not give the actual average.


### Explain how the ocean-level calculations use the annual rate and number of years.

The program uses the annual rate of 1.5 millimeters and multiplies it by the number of years. For example, 1.5 multiplied by 5 gives an increase of 7.5 millimeters. The same calculation is done separately for 7 and 10 years.


### Why is the annual ocean-level rate a good candidate for a named constant?

The annual rate is a constant because it is supposed to stay at 1.5 millimeters per year throughout the calculations. Making it a named constant also makes the code easier to understand because `ANNUAL_RATE` clearly shows what the number represents.


### Why does the assignment require calculations to be stored before using `cout`?

Storing the calculations in variables makes the code easier to read and understand. It also makes it easier to check the results or use them somewhere else instead of putting the entire calculation directly inside `cout`.