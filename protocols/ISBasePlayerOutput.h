/* made by EzioChiu.
 */

@protocol ISBasePlayerOutput <NSObject>

@required

- (void)applyOutputInfo:(void *)arg1 withTransitionOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: ISPlayerState *, ISPlayerOutputTransitionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)applyScale:(void *)arg1 withTransitionOptions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: double, ISPlayerOutputTransitionOptions *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setContent:(ISPlayerOutputContent *)arg1;

@end
