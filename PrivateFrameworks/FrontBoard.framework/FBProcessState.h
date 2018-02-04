/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessState : NSObject <BSDescriptionProviding, NSCopying> {
    int  _effectiveVisibility;
    bool  _foreground;
    int  _pid;
    bool  _running;
    int  _taskState;
    int  _visibility;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int effectiveVisibility;
@property (getter=isForeground, nonatomic) bool foreground;
@property (readonly) unsigned long long hash;
@property (nonatomic) int pid;
@property (getter=isRunning, nonatomic) bool running;
@property (readonly) Class superclass;
@property (nonatomic) int taskState;
@property (nonatomic) int visibility;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (int)effectiveVisibility;
- (id)init;
- (id)initWithPid:(int)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isForeground;
- (bool)isRunning;
- (int)pid;
- (void)setEffectiveVisibility:(int)arg1;
- (void)setForeground:(bool)arg1;
- (void)setPid:(int)arg1;
- (void)setRunning:(bool)arg1;
- (void)setTaskState:(int)arg1;
- (void)setVisibility:(int)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (int)taskState;
- (int)visibility;

@end
