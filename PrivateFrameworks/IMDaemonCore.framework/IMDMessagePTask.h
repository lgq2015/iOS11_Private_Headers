/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
 */

@interface IMDMessagePTask : NSObject {
    NSString * _guid;
    unsigned long long  _taskFlags;
}

@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) unsigned long long taskFlags;

- (void)compeletedTask:(unsigned long long)arg1;
- (void)dealloc;
- (id)guid;
- (id)initWithGUID:(id)arg1;
- (id)initWithStoreDictionary:(id)arg1;
- (bool)needsProccesingFor:(unsigned long long)arg1;
- (void)setTaskFlag:(unsigned long long)arg1;
- (unsigned long long)taskFlags;

@end
