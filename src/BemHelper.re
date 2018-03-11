let bem = (~block: option(string)=?, ~element: option(string)=?, ()): string =>
  switch (block, element) {
  | (Some(block'), Some(element')) => block' ++ "__" ++ element'
  | (Some(block'), None) => block'
  | (None, Some(element')) => element'
  | (None, None) => ""
  };

let default = bem;
