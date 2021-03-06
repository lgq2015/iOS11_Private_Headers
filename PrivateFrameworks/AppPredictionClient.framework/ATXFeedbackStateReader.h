/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXFeedbackStateReader : NSObject {
    NSString * _abGroup;
    int  _appCount;
    long long  _assetVersion;
    NSData * _data;
    const char * _perAppDataStart;
}

@property (nonatomic, readonly) NSString *abGroup;
@property (nonatomic, readonly) long long assetVersion;

- (void).cxx_destruct;
- (id)abGroup;
- (long long)assetVersion;
- (void)enumerateApps:(id /* block */)arg1;
- (id)init;
- (id)initWithData:(id)arg1;

@end
