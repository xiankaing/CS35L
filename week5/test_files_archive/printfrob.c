#include "stdio.h"

int main(void){
	for(unsigned int c = 0; c <= 0xFF; c++){
		printf("\\%o", (c^42));
	}
}
/*
\52\53\50\51\56\57\54\55\42\43\40\41\46\47\44\45\72\73\70\71\76\77\74\75\62\63\60\61\66\67\64\65\12\13\10\11\16\17\14\15\2\3\0\1\6\7\4\5\32\33\30\31\36\37\34\35\22\23\20\21\26\27\24\25\152\153\150\151\156\157\154\155\142\143\140\141\146\147\144\145\172\173\170\171\176\177\174\175\162\163\160\161\166\167\164\165\112\113\110\111\116\117\114\115\102\103\100\101\106\107\104\105\132\133\130\131\136\137\134\135\122\123\120\121\126\127\124\125\252\253\250\251\256\257\254\255\242\243\240\241\246\247\244\245\272\273\270\271\276\277\274\275\262\263\260\261\266\267\264\265\212\213\210\211\216\217\214\215\202\203\200\201\206\207\204\205\232\233\230\231\236\237\234\235\222\223\220\221\226\227\224\225\352\353\350\351\356\357\354\355\342\343\340\341\346\347\344\345\372\373\370\371\376\377\374\375\362\363\360\361\366\367\364\365\312\313\310\311\316\317\314\315\302\303\300\301\306\307\304\305\332\333\330\331\336\337\334\335\322\323\320\321\326\327\324\325
*/