const func_main = (source) => {
	const str = source.replace(/\r?\n/g,"");
	if (!(check_str(str, str.split("").reverse().join("")))) {
		console.log("No");
	} else {
		console.log("Yes");
	}
}

const check_str = (str1, str2) => {
	if (str1 == str2) {
		return true;
	} else {
		return false;
	}
}

func_main(require('fs').readFileSync('/dev/stdin', 'utf8'));
