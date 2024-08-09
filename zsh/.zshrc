alias l="ls -la"

alias gad="git add ."
alias gca="git commit --amend --no-edit"
alias gpf="git push -fu"
alias doit="gad && gca && gpf"

alias find8080="lsof -i :8080"
alias find8081="lsof -i :8081"

alias kgp="kubectl get pods"
alias k="kubectl"

alias help='echo " find8080\n find8081\n kgp\n k\n k wait --for=condition=ready pod <podname>\n k config use-context\n k rollout restart deployment <deploymentname>\n jshell"'

export PROMPT="%n %F{magenta}%~ %F{green}%# "
