/* made by EzioChiu.
 */

@protocol INPlayAudioMessageIntentHandling <NSObject>

@required

- (void)handlePlayAudioMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPlayAudioMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlayAudioMessageIntentResponse *, void*

@optional

- (void)confirmPlayAudioMessage:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: INPlayAudioMessageIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, INPlayAudioMessageIntentResponse *, void*

@end
