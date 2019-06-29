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

### Sample configuration files
Sample configurations can be written in `yaml` as well as `json`. Take a look

<br>

<details>
<summary align="center">YAML configuration is written as <b>.hooked.yaml</b> </summary>

```yaml
version: 1.0
hooks:
  pre-commit:
    env_file: .env
    commands:
      - "cat .hooked.log >> pre-commit hook'"
      - "cat .hooked.log >> 'hooked!'"
  post-commit:
    environment:
      - HOST: localhost
    commands:
      - "cat .hooked.log >> post-commit hook'"
      - "cat .hooked.log >> 'hooked!'"

```

</details>


<details>
<summary align="center">JSON configuration is written as <b>.hooked.json</b> </summary>

```json
{
	"version": 1,
	"hooks": {
		"pre-commit": {
			"env_file": ".env",
			"commands": [
				"cat .hooked.log >> pre-commit hook'",
				"cat .hooked.log >> 'hooked!'"
			]
		},
		"post-commit": {
			"environment": [
				{
					"HOST": "localhost"
				}
			],
			"commands": [
				"cat .hooked.log >> post-commit hook'",
				"cat .hooked.log >> 'hooked!'"
			]
		}
	}
}
```
</details>

<br>
<br>

<h3 align="center">List of hooks supported</h3>

<div align = "center">

| hook | description    |      further reading |    
|:----:|:----------------------------------------:|:------:|
| applypatch-msg        | A script executed before | [view sample/documentation on the hook](https://github.com/git/git/blob/master/templates/hooks--applypatch-msg.sample) |
| pre-applypatch        | A script executed before patch is applied | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L74) |
| post-applypatch       | A script executed after patch is applied | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L74) |
| pre-commit            | A script executed before `git commit`| [view sample/documentation on the hook](https://github.com/git/git/blob/master/templates/hooks--pre-commit.sample) | 
| prepare-commit-msg    | A script executed before when preparing git commit message | [view sample/documentation on the hook](https://github.com/git/git/blob/master/templates/hooks--prepare-commit-msg.sample) |
| commit-msg            | A script executed before `git commit -m` | [view sample/documentation on the hook](https://github.com/git/git/blob/master/templates/hooks--commit-msg.sample) |
| post-commit           | A script executed after `git commit`   | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L142) |
| pre-rebase            | A script executed before rebase        | [view sample/documentation on the hook](https://github.com/git/git/blob/master/templates/hooks--pre-rebase.sample) |
| post-checkout         | A script executed after checkout       | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L160) |
| post-merge            | A script executed after merge          | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L178) |
| pre-receive           | A script executed before receive       | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L221) |
| update                | A script executed at the time of updating | [view sample/documentation on the hook](https://github.com/git/git/blob/master/templates/hooks--update.sample) |
| post-receive          | A script executed after receive         | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L295) |
| post-update           | A script executed after update          | [view sample/documentation on the hook](https://github.com/git/git/blob/master/templates/hooks--post-update.sample) |
| pre-auto-gc           | A script executed by git receive pack when invoked after git push | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L387) |
| post-rewrite          | A script executed after rewrite         | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L394) |
| pre-push              | A script executed before `git push`     | [view sample/documentation on the hook](https://github.com/git/git/blob/master/Documentation/githooks.txt#L192) |

</div>
