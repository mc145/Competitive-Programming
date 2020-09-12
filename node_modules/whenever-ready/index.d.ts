/**
 * A promise that resolves when a value is set.
 * @example
 * ```
 * const WhenReady = require("when-ready");
 * const wReady = new WhenReady();
 *
 * whenReady.when().then(() => console.log("READY!"));
 * whenReady.ready = true;
 * ```
*/
declare class WheneverReady {
    /**
     * @param ready The initial readiness value.
    */
	constructor(ready?: boolean)

    /**
    * The readiness.
    */
	public ready: boolean

    /**
    * Returns a promise that will resolve when `ready` is true.
    */
	public when(): Promise<void>
}

export = WheneverReady
