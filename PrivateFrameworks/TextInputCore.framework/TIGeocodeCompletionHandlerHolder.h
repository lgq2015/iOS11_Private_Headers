/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
 */

@interface TIGeocodeCompletionHandlerHolder : NSObject {
    id /* block */  _geocodeCompletionHandler;
}

@property (nonatomic, copy) id /* block */ geocodeCompletionHandler;

- (void)dealloc;
- (id /* block */)geocodeCompletionHandler;
- (void)setGeocodeCompletionHandler:(id /* block */)arg1;

@end