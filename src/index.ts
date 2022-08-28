import {calc as cpp} from '../addons/addon';

(async (): Promise<void> => {
    try {
let res: number = await cpp.sum(5);
console.log(res);

    } catch (err) {
        console.error(err);
    }
})();
