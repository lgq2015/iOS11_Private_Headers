/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
 */

@interface CNUIUserActionListModel : NSObject {
    NSArray * _actions;
    CNUIUserActionItem * _defaultAction;
    NSArray * _directoryServiceActions;
    NSArray * _foundOnDeviceActions;
}

@property (nonatomic, copy) NSArray *actions;
@property (nonatomic, retain) CNUIUserActionItem *defaultAction;
@property (nonatomic, copy) NSArray *directoryServiceActions;
@property (nonatomic, copy) NSArray *foundOnDeviceActions;
@property (nonatomic, readonly) bool isEmpty;

+ (id)emptyModel;

- (void).cxx_destruct;
- (id)actions;
- (id)allActions;
- (id)defaultAction;
- (id)description;
- (id)directoryServiceActions;
- (id)foundOnDeviceActions;
- (id)initWithDefaultAction:(id)arg1 actions:(id)arg2 directoryServiceActions:(id)arg3 foundOnDeviceActions:(id)arg4;
- (id)initWithModel:(id)arg1 actions:(id)arg2;
- (bool)isEmpty;
- (void)setActions:(id)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setDirectoryServiceActions:(id)arg1;
- (void)setFoundOnDeviceActions:(id)arg1;

@end
