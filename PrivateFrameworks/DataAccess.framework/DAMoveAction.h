/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAMoveAction : DAAction {
    NSString * _destinationContainerId;
    NSString * _sourceContainerId;
    NSString * _sourceServerId;
}

@property (nonatomic, retain) NSString *destinationContainerId;
@property (nonatomic, retain) NSString *sourceContainerId;
@property (nonatomic, retain) NSString *sourceServerId;

- (void).cxx_destruct;
- (id)destinationContainerId;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemChangeType:(unsigned long long)arg1 changedItem:(id)arg2 sourceContainerId:(id)arg3 sourceServerId:(id)arg4 destinationContainerId:(id)arg5;
- (void)setDestinationContainerId:(id)arg1;
- (void)setSourceContainerId:(id)arg1;
- (void)setSourceServerId:(id)arg1;
- (id)sourceContainerId;
- (id)sourceServerId;

@end
