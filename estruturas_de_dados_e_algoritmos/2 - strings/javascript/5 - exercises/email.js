function extractEmailInformation(email) {
    const parts = email.split("@");
    const username = parts[0];
    const domain = parts[1];

    const isBrazilian = domain.endsWith("br");

    return { username, domain, isBrazilian };
}

const emailinfo = extractEmailInformation("joao.silva23@yahoo.com.br");
console.log("User: ", emailinfo.username);
console.log("Domain: ", emailinfo.domain);
console.log("Brazilian: ", emailinfo.isBrazilian ? "Sim" : "Não");