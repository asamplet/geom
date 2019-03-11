syntax on
colorscheme elflord

map <C-K> :ClangFormat<cr>
imap <C-K> <c-o>:ClangFormat<cr>

function! Formatonsave()
let l:formatdiff = 1
ClangFormat
endfunction
autocmd BufWritePre *.h,*.cc,*.cpp,*.c call Formatonsave()

