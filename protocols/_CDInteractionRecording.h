/* made by EzioChiu.
 */

@protocol _CDInteractionRecording

@required

- (bool)recordInteraction:(_CDInteraction *)arg1;
- (bool)recordInteractions:(NSArray *)arg1;
- (void)recordInteractions:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
