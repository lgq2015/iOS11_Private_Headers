/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOSearchAttributionListener : NSObject {
    NSMutableArray * _completionHandlers;
    NSMutableArray * _errorHandlers;
    NSString * _identifier;
}

@property (nonatomic, readonly) NSString *identifier;

- (void).cxx_destruct;
- (void)addCompletionHandler:(id /* block */)arg1 errorHandler:(id /* block */)arg2;
- (void)handleError:(id)arg1;
- (void)handleInfo:(id)arg1;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;

@end
