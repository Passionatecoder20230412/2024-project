[33mcommit d3261d4c59280bfb564330030442a6527d2afdce[m[33m ([m[1;36mHEAD[m[33m -> [m[1;32mmaster[m[33m)[m
Author: rajvijayanegondi12042001 <vijaylc14052021@gmail.com>
Date:   Mon Jul 15 19:59:41 2024 +0530

    Initialize project using Create React App

[1mdiff --git a/.gitignore b/.gitignore[m
[1mnew file mode 100644[m
[1mindex 0000000..4d29575[m
[1m--- /dev/null[m
[1m+++ b/.gitignore[m
[36m@@ -0,0 +1,23 @@[m
[32m+[m[32m# See https://help.github.com/articles/ignoring-files/ for more about ignoring files.[m
[32m+[m
[32m+[m[32m# dependencies[m
[32m+[m[32m/node_modules[m
[32m+[m[32m/.pnp[m
[32m+[m[32m.pnp.js[m
[32m+[m
[32m+[m[32m# testing[m
[32m+[m[32m/coverage[m
[32m+[m
[32m+[m[32m# production[m
[32m+[m[32m/build[m
[32m+[m
[32m+[m[32m# misc[m
[32m+[m[32m.DS_Store[m
[32m+[m[32m.env.local[m
[32m+[m[32m.env.development.local[m
[32m+[m[32m.env.test.local[m
[32m+[m[32m.env.production.local[m
[32m+[m
[32m+[m[32mnpm-debug.log*[m
[32m+[m[32myarn-debug.log*[m
[32m+[m[32myarn-error.log*[m
[1mdiff --git a/README.md b/README.md[m
[1mnew file mode 100644[m
[1mindex 0000000..58beeac[m
[1m--- /dev/null[m
[1m+++ b/README.md[m
[36m@@ -0,0 +1,70 @@[m
[32m+[m[32m# Getting Started with Create React App[m
[32m+[m
[32m+[m[32mThis project was bootstrapped with [Create React App](https://github.com/facebook/create-react-app).[m
[32m+[m
[32m+[m[32m## Available Scripts[m
[32m+[m
[32m+[m[32mIn the project directory, you can run:[m
[32m+[m
[32m+[m[32m### `npm start`[m
[32m+[m
[32m+[m[32mRuns the app in the development mode.\[m
[32m+[m[32mOpen [http://localhost:3000](http://localhost:3000) to view it in your browser.[m
[32m+[m
[32m+[m[32mThe page will reload when you make changes.\[m
[32m+[m[32mYou may also see any lint errors in the console.[m
[32m+[m
[32m+[m[32m### `npm test`[m
[32m+[m
[32m+[m[32mLaunches the test runner in the interactive watch mode.\[m
[32m+[m[32mSee the section about [running tests](https://facebook.github.io/create-react-app/docs/running-tests) for more information.[m
[32m+[m
[32m+[m[32m### `npm run build`[m
[32m+[m
[32m+[m[32mBuilds the app for production to the `build` folder.\[m
[32m+[m[32mIt correctly bundles React in production mode and optimizes the build for the best performance.[m
[32m+[m
[32m+[m[32mThe build is minified and the filenames include the hashes.\[m
[32m+[m[32mYour app is ready to be deployed![m
[32m+[m
[32m+[m[32mSee the section about [deployment](https://facebook.github.io/create-react-app/docs/deployment) for more information.[m
[32m+[m
[32m+[m[32m### `npm run eject`[m
[32m+[m
[32m+[m[32m**Note: this is a one-way operation. Once you `eject`, you can't go back!**[m
[32m+[m
[32m+[m[32mIf you aren't satisfied with the build tool and configuration choices, you can `eject` at any time. This command will remove the single build dependency from your project.[m
[32m+[m
[32m+[m[32mInstead, it will copy all the configuration files and the transitive dependencies (webpack, Babel, ESLint, etc) right into your project so you have full control over them. All of the commands except `eject` will still work, but they will point to the copied scripts so you can tweak them. At this point you're on your own.[m
[32m+[m
[32m+[m[32mYou don't have to ever use `eject`. The curated feature set is suitable for small and middle deployments, and you shouldn't feel obligated to use this feature. However we understand that this tool wouldn't be useful if you couldn't customize it when you are ready for it.[m
[32m+[m
[32m+[m[32m## Learn More[m
[32m+[m
[32m+[m[32mYou can learn more in the [Create React App documentation](https://facebook.github.io/create-react-app/docs/getting-started).[m
[32m+[m
[32m+[m[32mTo learn React, check out the [React documentation](https://reactjs.org/).[m
[32m+[m
[32m+[m[32m### Code Splitting[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/code-splitting](https://facebook.github.io/create-react-app/docs/code-splitting)[m
[32m+[m
[32m+[m[32m### Analyzing the Bundle Size[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/analyzing-the-bundle-size](https://facebook.github.io/create-react-app/docs/analyzing-the-bundle-size)[m
[32m+[m
[32m+[m[32m### Making a Progressive Web App[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/making-a-progressive-web-app](https://facebook.github.io/create-react-app/docs/making-a-progressive-web-app)[m
[32m+[m
[32m+[m[32m### Advanced Configuration[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/advanced-configuration](https://facebook.github.io/create-react-app/docs/advanced-configuration)[m
[32m+[m
[32m+[m[32m### Deployment[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/deployment](https://facebook.github.io/create-react-app/docs/deployment)[m
[32m+[m
[32m+[m[32m### `npm run build` fails to minify[m
[32m+[m
[32m+[m[32mThis section has moved here: [https://facebook.github.io/create-react-app/docs/troubleshooting#npm-run-build-fails-to-minify](https://facebook.github.io/create-react-app/docs/troubleshooting#npm-run-build-fails-to-minify)[m
[1mdiff --git a/package-lock.json b/package-lock.json[m
[1mnew file mode 100644[m
[1mindex 0000000..95d3fa5[m
[1m--- /dev/null[m
[1m+++ b/package-lock.json[m
[36m@@ -0,0 +1,18271 @@[m
[32m+[m[32m{[m
[32m+[m[32m  "name": "vijay-app",[m
[32m+[m[32m  "version": "0.1.0",[m
[32m+[m[32m  "lockfileVersion": 3,[m
[32m+[m[32m  "requires": true,[m
[32m+[m[32m  "packages": {[m
[32m+[m[32m    "": {[m
[32m+[m[32m      "name": "vijay-app",[m
[32m+[m[32m      "version": "0.1.0",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@testing-library/jest-dom": "^5.17.0",[m
[32m+[m[32m        "@testing-library/react": "^13.4.0",[m
[32m+[m[32m        "@testing-library/user-event": "^13.5.0",[m
[32m+[m[32m        "react": "^18.3.1",[m
[32m+[m[32m        "react-dom": "^18.3.1",[m
[32m+[m[32m        "react-scripts": "5.0.1",[m
[32m+[m[32m        "web-vitals": "^2.1.4"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@adobe/css-tools": {[m
[32m+[m[32m      "version": "4.4.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@adobe/css-tools/-/css-tools-4.4.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-Ff9+ksdQQB3rMncgqDK78uLznstjyfIf2Arnh22pW8kBpLs6rpKDwgnZT46hin5Hl1WzazzK64DOrhSwYpS7bQ=="[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@alloc/quick-lru": {[m
[32m+[m[32m      "version": "5.2.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@alloc/quick-lru/-/quick-lru-5.2.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-UrcABB+4bUrFABwbluTIBErXwvbsU/V7TZWfmbgJfbkwiBuziS9gxdODUyuiecfdGQ85jglMW6juS3+z5TsKLw==",[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "url": "https://github.com/sponsors/sindresorhus"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@ampproject/remapping": {[m
[32m+[m[32m      "version": "2.3.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@ampproject/remapping/-/remapping-2.3.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-30iZtAPgz+LTIYoeivqYo853f02jBYSd5uGnGpkFV0M3xOt9aN73erkgYAmZU43x4VfqcnLxW9Kpg3R5LC4YYw==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@jridgewell/gen-mapping": "^0.3.5",[m
[32m+[m[32m        "@jridgewell/trace-mapping": "^0.3.24"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/code-frame": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/code-frame/-/code-frame-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-BcYH1CVJBO9tvyIZ2jVeXgSIMvGZ2FDRvDdOIVQyuklNKSsx+eppDEBq/g47Ayw+RqNFE+URvOShmf+f/qwAlA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/highlight": "^7.24.7",[m
[32m+[m[32m        "picocolors": "^1.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/compat-data": {[m
[32m+[m[32m      "version": "7.24.9",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/compat-data/-/compat-data-7.24.9.tgz",[m
[32m+[m[32m      "integrity": "sha512-e701mcfApCJqMMueQI0Fb68Amflj83+dvAvHawoBpAz+GDjCIyGHzNwnefjsWJ3xiYAqqiQFoWbspGYBdb2/ng==",[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/core": {[m
[32m+[m[32m      "version": "7.24.9",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/core/-/core-7.24.9.tgz",[m
[32m+[m[32m      "integrity": "sha512-5e3FI4Q3M3Pbr21+5xJwCv6ZT6KmGkI0vw3Tozy5ODAQFTIWe37iT8Cr7Ice2Ntb+M3iSKCEWMB1MBgKrW3whg==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@ampproject/remapping": "^2.2.0",[m
[32m+[m[32m        "@babel/code-frame": "^7.24.7",[m
[32m+[m[32m        "@babel/generator": "^7.24.9",[m
[32m+[m[32m        "@babel/helper-compilation-targets": "^7.24.8",[m
[32m+[m[32m        "@babel/helper-module-transforms": "^7.24.9",[m
[32m+[m[32m        "@babel/helpers": "^7.24.8",[m
[32m+[m[32m        "@babel/parser": "^7.24.8",[m
[32m+[m[32m        "@babel/template": "^7.24.7",[m
[32m+[m[32m        "@babel/traverse": "^7.24.8",[m
[32m+[m[32m        "@babel/types": "^7.24.9",[m
[32m+[m[32m        "convert-source-map": "^2.0.0",[m
[32m+[m[32m        "debug": "^4.1.0",[m
[32m+[m[32m        "gensync": "^1.0.0-beta.2",[m
[32m+[m[32m        "json5": "^2.2.3",[m
[32m+[m[32m        "semver": "^6.3.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "funding": {[m
[32m+[m[32m        "type": "opencollective",[m
[32m+[m[32m        "url": "https://opencollective.com/babel"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/core/node_modules/semver": {[m
[32m+[m[32m      "version": "6.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/semver/-/semver-6.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-BR7VvDCVHO+q2xBEWskxS6DJE1qRnb7DxzUrogb71CWoSficBxYsiAGd+Kl0mmq/MprG9yArRkyrQxTO6XjMzA==",[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "semver": "bin/semver.js"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/eslint-parser": {[m
[32m+[m[32m      "version": "7.24.8",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/eslint-parser/-/eslint-parser-7.24.8.tgz",[m
[32m+[m[32m      "integrity": "sha512-nYAikI4XTGokU2QX7Jx+v4rxZKhKivaQaREZjuW3mrJrbdWJ5yUfohnoUULge+zEEaKjPYNxhoRgUKktjXtbwA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@nicolo-ribaudo/eslint-scope-5-internals": "5.1.1-v1",[m
[32m+[m[32m        "eslint-visitor-keys": "^2.1.0",[m
[32m+[m[32m        "semver": "^6.3.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": "^10.13.0 || ^12.13.0 || >=14.0.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "@babel/core": "^7.11.0",[m
[32m+[m[32m        "eslint": "^7.5.0 || ^8.0.0 || ^9.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/eslint-parser/node_modules/eslint-visitor-keys": {[m
[32m+[m[32m      "version": "2.1.0",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/eslint-visitor-keys/-/eslint-visitor-keys-2.1.0.tgz",[m
[32m+[m[32m      "integrity": "sha512-0rSmRBzXgDzIsD6mGdJgevzgezI534Cer5L/vyMX0kHzT/jiB43jRhd9YUlMGYLQy2zprNmoT8qasCGtY+QaKw==",[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=10"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/eslint-parser/node_modules/semver": {[m
[32m+[m[32m      "version": "6.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/semver/-/semver-6.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-BR7VvDCVHO+q2xBEWskxS6DJE1qRnb7DxzUrogb71CWoSficBxYsiAGd+Kl0mmq/MprG9yArRkyrQxTO6XjMzA==",[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "semver": "bin/semver.js"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/generator": {[m
[32m+[m[32m      "version": "7.24.9",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/generator/-/generator-7.24.9.tgz",[m
[32m+[m[32m      "integrity": "sha512-G8v3jRg+z8IwY1jHFxvCNhOPYPterE4XljNgdGTYfSTtzzwjIswIzIaSPSLs3R7yFuqnqNeay5rjICfqVr+/6A==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/types": "^7.24.9",[m
[32m+[m[32m        "@jridgewell/gen-mapping": "^0.3.5",[m
[32m+[m[32m        "@jridgewell/trace-mapping": "^0.3.25",[m
[32m+[m[32m        "jsesc": "^2.5.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-annotate-as-pure": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-annotate-as-pure/-/helper-annotate-as-pure-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-BaDeOonYvhdKw+JoMVkAixAAJzG2jVPIwWoKBPdYuY9b452e2rPuI9QPYh3KpofZ3pW2akOmwZLOiOsHMiqRAg==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/types": "^7.24.7"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-builder-binary-assignment-operator-visitor": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-builder-binary-assignment-operator-visitor/-/helper-builder-binary-assignment-operator-visitor-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-xZeCVVdwb4MsDBkkyZ64tReWYrLRHlMN72vP7Bdm3OUOuyFZExhsHUUnuWnm2/XOlAJzR0LfPpB56WXZn0X/lA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/traverse": "^7.24.7",[m
[32m+[m[32m        "@babel/types": "^7.24.7"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-compilation-targets": {[m
[32m+[m[32m      "version": "7.24.8",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-compilation-targets/-/helper-compilation-targets-7.24.8.tgz",[m
[32m+[m[32m      "integrity": "sha512-oU+UoqCHdp+nWVDkpldqIQL/i/bvAv53tRqLG/s+cOXxe66zOYLU7ar/Xs3LdmBihrUMEUhwu6dMZwbNOYDwvw==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/compat-data": "^7.24.8",[m
[32m+[m[32m        "@babel/helper-validator-option": "^7.24.8",[m
[32m+[m[32m        "browserslist": "^4.23.1",[m
[32m+[m[32m        "lru-cache": "^5.1.1",[m
[32m+[m[32m        "semver": "^6.3.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-compilation-targets/node_modules/semver": {[m
[32m+[m[32m      "version": "6.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/semver/-/semver-6.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-BR7VvDCVHO+q2xBEWskxS6DJE1qRnb7DxzUrogb71CWoSficBxYsiAGd+Kl0mmq/MprG9yArRkyrQxTO6XjMzA==",[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "semver": "bin/semver.js"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-create-class-features-plugin": {[m
[32m+[m[32m      "version": "7.24.8",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-create-class-features-plugin/-/helper-create-class-features-plugin-7.24.8.tgz",[m
[32m+[m[32m      "integrity": "sha512-4f6Oqnmyp2PP3olgUMmOwC3akxSm5aBYraQ6YDdKy7NcAMkDECHWG0DEnV6M2UAkERgIBhYt8S27rURPg7SxWA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/helper-annotate-as-pure": "^7.24.7",[m
[32m+[m[32m        "@babel/helper-environment-visitor": "^7.24.7",[m
[32m+[m[32m        "@babel/helper-function-name": "^7.24.7",[m
[32m+[m[32m        "@babel/helper-member-expression-to-functions": "^7.24.8",[m
[32m+[m[32m        "@babel/helper-optimise-call-expression": "^7.24.7",[m
[32m+[m[32m        "@babel/helper-replace-supers": "^7.24.7",[m
[32m+[m[32m        "@babel/helper-skip-transparent-expression-wrappers": "^7.24.7",[m
[32m+[m[32m        "@babel/helper-split-export-declaration": "^7.24.7",[m
[32m+[m[32m        "semver": "^6.3.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "@babel/core": "^7.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-create-class-features-plugin/node_modules/semver": {[m
[32m+[m[32m      "version": "6.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/semver/-/semver-6.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-BR7VvDCVHO+q2xBEWskxS6DJE1qRnb7DxzUrogb71CWoSficBxYsiAGd+Kl0mmq/MprG9yArRkyrQxTO6XjMzA==",[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "semver": "bin/semver.js"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-create-regexp-features-plugin": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-create-regexp-features-plugin/-/helper-create-regexp-features-plugin-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-03TCmXy2FtXJEZfbXDTSqq1fRJArk7lX9DOFC/47VthYcxyIOx+eXQmdo6DOQvrbpIix+KfXwvuXdFDZHxt+rA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/helper-annotate-as-pure": "^7.24.7",[m
[32m+[m[32m        "regexpu-core": "^5.3.1",[m
[32m+[m[32m        "semver": "^6.3.1"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "@babel/core": "^7.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-create-regexp-features-plugin/node_modules/semver": {[m
[32m+[m[32m      "version": "6.3.1",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/semver/-/semver-6.3.1.tgz",[m
[32m+[m[32m      "integrity": "sha512-BR7VvDCVHO+q2xBEWskxS6DJE1qRnb7DxzUrogb71CWoSficBxYsiAGd+Kl0mmq/MprG9yArRkyrQxTO6XjMzA==",[m
[32m+[m[32m      "bin": {[m
[32m+[m[32m        "semver": "bin/semver.js"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-define-polyfill-provider": {[m
[32m+[m[32m      "version": "0.6.2",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-define-polyfill-provider/-/helper-define-polyfill-provider-0.6.2.tgz",[m
[32m+[m[32m      "integrity": "sha512-LV76g+C502biUK6AyZ3LK10vDpDyCzZnhZFXkH1L75zHPj68+qc8Zfpx2th+gzwA2MzyK+1g/3EPl62yFnVttQ==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/helper-compilation-targets": "^7.22.6",[m
[32m+[m[32m        "@babel/helper-plugin-utils": "^7.22.5",[m
[32m+[m[32m        "debug": "^4.1.1",[m
[32m+[m[32m        "lodash.debounce": "^4.0.8",[m
[32m+[m[32m        "resolve": "^1.14.2"[m
[32m+[m[32m      },[m
[32m+[m[32m      "peerDependencies": {[m
[32m+[m[32m        "@babel/core": "^7.4.0 || ^8.0.0-0 <8.0.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-environment-visitor": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-environment-visitor/-/helper-environment-visitor-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-DoiN84+4Gnd0ncbBOM9AZENV4a5ZiL39HYMyZJGZ/AZEykHYdJw0wW3kdcsh9/Kn+BRXHLkkklZ51ecPKmI1CQ==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/types": "^7.24.7"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-function-name": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-function-name/-/helper-function-name-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-FyoJTsj/PEUWu1/TYRiXTIHc8lbw+TDYkZuoE43opPS5TrI7MyONBE1oNvfguEXAD9yhQRrVBnXdXzSLQl9XnA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/template": "^7.24.7",[m
[32m+[m[32m        "@babel/types": "^7.24.7"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-hoist-variables": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-hoist-variables/-/helper-hoist-variables-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-MJJwhkoGy5c4ehfoRyrJ/owKeMl19U54h27YYftT0o2teQ3FJ3nQUf/I3LlJsX4l3qlw7WRXUmiyajvHXoTubQ==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/types": "^7.24.7"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-member-expression-to-functions": {[m
[32m+[m[32m      "version": "7.24.8",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-member-expression-to-functions/-/helper-member-expression-to-functions-7.24.8.tgz",[m
[32m+[m[32m      "integrity": "sha512-LABppdt+Lp/RlBxqrh4qgf1oEH/WxdzQNDJIu5gC/W1GyvPVrOBiItmmM8wan2fm4oYqFuFfkXmlGpLQhPY8CA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/traverse": "^7.24.8",[m
[32m+[m[32m        "@babel/types": "^7.24.8"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-module-imports": {[m
[32m+[m[32m      "version": "7.24.7",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-module-imports/-/helper-module-imports-7.24.7.tgz",[m
[32m+[m[32m      "integrity": "sha512-8AyH3C+74cgCVVXow/myrynrAGv+nTVg5vKu2nZph9x7RcRwzmh0VFallJuFTZ9mx6u4eSdXZfcOzSqTUm0HCA==",[m
[32m+[m[32m      "dependencies": {[m
[32m+[m[32m        "@babel/traverse": "^7.24.7",[m
[32m+[m[32m        "@babel/types": "^7.24.7"[m
[32m+[m[32m      },[m
[32m+[m[32m      "engines": {[m
[32m+[m[32m        "node": ">=6.9.0"[m
[32m+[m[32m      }[m
[32m+[m[32m    },[m
[32m+[m[32m    "node_modules/@babel/helper-module-transforms": {[m
[32m+[m[32m      "version": "7.24.9",[m
[32m+[m[32m      "resolved": "https://registry.npmjs.org/@babel/helper-module-transforms/-/helper-module-transforms-7.24.9.tgz",[m
[32m+[m[32m      "integrity": "sha512-oYb