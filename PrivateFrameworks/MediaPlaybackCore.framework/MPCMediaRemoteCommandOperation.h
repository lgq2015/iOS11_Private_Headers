/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteCommandOperation : MPAsyncOperation {
    unsigned long long  _options;
    MPCPlayerCommandRequest * _request;
}

@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) MPCPlayerCommandRequest *request;

- (void).cxx_destruct;
- (void)execute;
- (id)initWithCommandRequest:(id)arg1 options:(unsigned long long)arg2;
- (unsigned long long)options;
- (id)request;

@end
