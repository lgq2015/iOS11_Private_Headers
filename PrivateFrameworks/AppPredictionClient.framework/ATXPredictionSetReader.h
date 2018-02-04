/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
 */

@interface ATXPredictionSetReader : NSObject {
    int  _appCount;
    NSData * _data;
    const char * _perAppDataStart;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)readBundleIdsWithLimit:(int)arg1;

@end
