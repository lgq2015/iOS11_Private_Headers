/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwipeActionsConfiguration : NSObject {
    NSArray * _actions;
    bool  _autosizesButtons;
    bool  _performsFirstActionWithFullSwipe;
}

@property (nonatomic, readonly, copy) NSArray *actions;
@property (getter=_autosizesButtons, setter=_setAutosizesButtons:, nonatomic) bool autosizesButtons;
@property (nonatomic) bool performsFirstActionWithFullSwipe;

+ (id)configurationWithActions:(id)arg1;

- (void).cxx_destruct;
- (bool)_autosizesButtons;
- (void)_setAutosizesButtons:(bool)arg1;
- (id)actions;
- (id)description;
- (id)init;
- (bool)performsFirstActionWithFullSwipe;
- (void)setPerformsFirstActionWithFullSwipe:(bool)arg1;

@end
