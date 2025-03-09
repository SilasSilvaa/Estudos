const name = "Alice";
const age = 31;
const points = 8.347;

// Simple literal
const str1 = "Hello world!";
const str2 = 'Hello world!';
const str3 = `Hello world!`;

console.log("str1");
console.log(str1);

// Concatenation
const str_2 = "Cliente " + name + " tem idade " + age + " anos e fez " + points + " pontos";
console.log("str_2");
console.log(str_2);

// Escaoe cgaracters
const str_3 = "Cliente: " + name + " \nIdade: " + age;
const str_4 = "c:\\Program Files\\Windows";
const str_5 = "Senha = \"12345\"";
const str__5 = "Senha = '12345'";
const str6 =
    "<html>\n" +
    "\t<tbody>\n" +
    "\t\r<p>Hello world!</p>\n" +
    "\t<tbody>\n" +
    "<html>\n";


console.log("str3:");
console.log(str3);
console.log("str4:");
console.log(str_4);
console.log("str5:");
console.log(str_5);
console.log("str6:");
console.log(str6);

// Template literals (interpolation)
const str7 = `Cliente ${name} tem idade ${age} anos e fez ${points} pontos.`;
const str8 =
    `<html>
    <body>
        <p>Hello, World!</p>
    </body>
</html>
`;
const str9 =
    `<html>
    <body>
        <p>Hello, World ${name}!</p>
    </body>
</html>
`;
console.log("str7:");
console.log(str7);
console.log("str8:");
console.log(str8);
console.log("str9:");
console.log(str9);

// Number format
const str10 = `Cliente ${name} tem idade ${age} anos e fez ${points.toFixed(2)} pontos.`;
console.log("str10:");
console.log(str10);