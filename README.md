<p align="center">
    <img src="https://octodex.github.com/images/daftpunktocat-guy.gif" width=150px>
</p>
<h1 align="center">hooked</h1>
<h2 align="center">A github hooks manager</h2>

<br>

> git has now become your safe haven. Fear push no more. Control the entire lifecycle of your git project from pre commit messages to post merge automation.

<br>

<h3 align="center">What you can do with hooks</h3>

- [X] Deploy to multiple servers with a single push
- [X] Enforce style  
- [x] Enforce testing
- [X] Trigger builds
- [X] Trigger cleanup
- [X] Deploy to kubernetes 
- [X] Pretty much anything you want to do

<br>

<h3 align="center">List of hooks supported</h3>

<div align = "center">

| hook | description    |          
|:----:|:----------------------------------------:|
| applypatch-msg        | A script executed before         |
| pre-applypatch        | A script executed before patch is applied |
| post-applypatch       | A script executed after patch is applied |
| pre-commit            | A script executed before `git commit`|
| prepare-commit-msg    | A script executed before when preparing git commit message      |
| commit-msg            | A script executed before `git commit -m`         |
| post-commit           | A script executed after `git commit`   |
| pre-rebase            | A script executed before rebase        |
| post-checkout         | A script executed after checkout       |
| post-merge            | A script executed after merge          |
| pre-receive           | A script executed before receive       |
| update                | A script executed at the time of updating                |
| post-receive          | A script executed after receive         |
| post-update           | A script executed after update          |
| pre-auto-gc           | A script executed by git receive pack when invoked after git push        |
| post-rewrite          | A script executed after rewrite         |
| pre-push              | A script executed before `git push`     |

</div>

<br>
<br>

### Sample configuration files
Sample configurations can be written in `yaml` as well as `json`. Take a look

<br>

<details>
<summary align="center">YAML configuration is written as <b>.hooked.yaml</b> </summary>

```yaml
version: 1.0
hooks:
  post-commit:
    env_file: .env
    commands:
      - "cat .hooked.log >> 'post-commit hook'"
      - "cat .hooked.log >> 'hooked!'"
  pre-receive:
    environment:
      - HOST:localhost
    commands:
      - "cat .hooked.log >> 'pre-receive hook'"
      - "cat .hooked.log >> 'hooked!'"
  pre-push:
    commands:
      - "cat .hooked.log >> 'pre-push hook'"
      - "cat .hooked.log >> 'hooked!'"
```

</details>


<details>
<summary align="center">JSON configuration is written as <b>.hooked.json</b> </summary>

```json
{
	"version": 1,
	"hooks": {
		"post-commit": {
			"env_file": ".env",
			"commands": [
				"cat .hooked.log >> 'post-commit hook'",
				"cat .hooked.log >> 'hooked!'"
			]
		},
		"pre-receive": {
			"environment": [
				"HOST:localhost"
			],
			"commands": [
				"cat .hooked.log >> 'pre-receive hook'",
				"cat .hooked.log >> 'hooked!'"
			]
		},
		"pre-push": {
			"commands": [
				"cat .hooked.log >> 'pre-push hook'",
				"cat .hooked.log >> 'hooked!'"
			]
		}
	}
}
```
</details>