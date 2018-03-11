open Jest;
open Expect;
open BemHelper;

describe("BEM helper", () => {
  test("it should create a className with block", () => {
    let myBemClassNames = bem(~block="my-block", ());
    let expectedClassName = "my-block";

    expect(myBemClassNames) |> toBe(expectedClassName);
  });

  test("it should create a className with element", () => {
    let myBemClassNames = bem(~element="my-element", ());
    let expectedClassName = "my-element";

    expect(myBemClassNames) |> toBe(expectedClassName);
  });

  test("it should create classNames with block and element", () => {
    let myBemClassNames = bem(~block="my-block", ~element="element", ());
    let expectedClassName = "my-block__element";

    expect(myBemClassNames) |> toBe(expectedClassName);
  });
});
