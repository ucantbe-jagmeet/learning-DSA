 function temp(emails) {
    return (new Set(emails.map(email => {
    const [local, domain] = email.split('@');
    return local.split('+').shift().split('.').join('') + '@' + domain;
  }))).size;
    
}

temp(["test.email+alex@leetcode.com","test.e.mail+bob.cathy@leetcode.com","testemail+david@lee.tcode.com"])