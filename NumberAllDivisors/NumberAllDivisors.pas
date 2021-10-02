###

var divisors : integer → List<integer> := number → begin
  number := abs(number);
  var dv := new List<integer>;
  dv.AddRange(|1, number|);
  if (number > 3) then begin
    var k := 2;
    while k * k <= number do begin
      if (number mod k = 0) then
        if number div k > k then dv.AddRange(|k, number div k|) else dv.Add(k);
      inc(k);
    end;
  end;
  dv.Sort;
  result := dv;
end;

// example 
print(divisors(readinteger));
