/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
 */

@interface HLPRemoteDataController : NSObject {
    NSURL * _URL;
    HLPURLSession * _URLSession;
    bool  _hasLoaded;
    bool  _loading;
}

@property (nonatomic, copy) NSURL *URL;
@property (nonatomic) bool hasLoaded;
@property (nonatomic) bool loading;

- (void).cxx_destruct;
- (id)URL;
- (void)cancel;
- (void)clearData;
- (void)dealloc;
- (void)fetchDataWithDataType:(long long)arg1 completionHandler:(id /* block */)arg2;
- (bool)hasLoaded;
- (id)initWithURL:(id)arg1;
- (bool)loading;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(id /* block */)arg1;
- (void)setHasLoaded:(bool)arg1;
- (void)setLoading:(bool)arg1;
- (void)setURL:(id)arg1;

@end
