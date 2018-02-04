/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
 */

@interface GKConstraintUpdateController : NSObject {
    NSPointerArray * _constraintsToUpdate;
}

@property (nonatomic, retain) NSPointerArray *constraintsToUpdate;

+ (id)sharedController;

- (void)_updateConstraints;
- (id)constraintsToUpdate;
- (void)dealloc;
- (void)registerConstraint:(id)arg1 leading:(double)arg2 forFontTextStyle:(id)arg3;
- (void)setConstraintsToUpdate:(id)arg1;
- (void)updateConstraint:(id)arg1;

@end
