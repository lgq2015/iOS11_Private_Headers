/* made by EzioChiu.
 */

@protocol PHMediaFormatConversionImplementation <NSObject>

@required

- (void)performConversionRequest:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: PHMediaFormatConversionRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (long long)transferBehaviorUserPreference;

@end
