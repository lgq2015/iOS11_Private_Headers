/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDGatherLogsRequestOptions : ASDRequestOptions {
    bool  _verbose;
}

@property (nonatomic) bool verbose;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setVerbose:(bool)arg1;
- (bool)verbose;

@end
