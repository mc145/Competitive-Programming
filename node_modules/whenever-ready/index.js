"use strict"

module.exports = class WheneverReady {
	constructor(ready = false) {
		this._ready = ready
		this.listeners = []
	}

	get ready() {
		return this._ready
	}

	set ready(val) {
		this._ready = Boolean(val)
		if (this._ready) {
			this.listeners.forEach((cb) => cb())
			this.listeners = []
		}
	}

	when() {
		return new Promise((resolve) => {
			if (this._ready === true) resolve()
			else this.listeners.push(() => resolve())
		})
	}
}
