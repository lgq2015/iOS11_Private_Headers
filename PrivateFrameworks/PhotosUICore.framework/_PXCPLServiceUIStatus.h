/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface _PXCPLServiceUIStatus : NSObject <PXCPLServiceUIStatus> {
    id /* block */  _action;
    NSString * _actionConfirmationAlertButtonTitle;
    NSString * _actionConfirmationAlertSubtitle;
    NSString * _actionConfirmationAlertTitle;
    NSString * _actionTitle;
    NSString * _failureDescription;
    bool  _paused;
    double  _progress;
    NSString * _referencedItemsDescription;
    long long  _serviceAction;
    NSString * _stateDescription;
}

@property (nonatomic, copy) id /* block */ action;
@property (nonatomic, retain) NSString *actionConfirmationAlertButtonTitle;
@property (nonatomic, retain) NSString *actionConfirmationAlertSubtitle;
@property (nonatomic, retain) NSString *actionConfirmationAlertTitle;
@property (nonatomic, retain) NSString *actionTitle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSString *failureDescription;
@property (readonly) unsigned long long hash;
@property (getter=isPaused, nonatomic) bool paused;
@property (nonatomic) double progress;
@property (nonatomic, retain) NSString *referencedItemsDescription;
@property (nonatomic) long long serviceAction;
@property (nonatomic, retain) NSString *stateDescription;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_isEqualToCPLServiceUIStatus:(id)arg1 onlyProgressIsNotEqual:(bool*)arg2;
- (id /* block */)action;
- (id)actionConfirmationAlertButtonTitle;
- (id)actionConfirmationAlertSubtitle;
- (id)actionConfirmationAlertTitle;
- (id)actionTitle;
- (id)description;
- (id)failureDescription;
- (id)init;
- (bool)isPaused;
- (double)progress;
- (id)referencedItemsDescription;
- (long long)serviceAction;
- (void)setAction:(id /* block */)arg1;
- (void)setActionConfirmationAlertButtonTitle:(id)arg1;
- (void)setActionConfirmationAlertSubtitle:(id)arg1;
- (void)setActionConfirmationAlertTitle:(id)arg1;
- (void)setActionTitle:(id)arg1;
- (void)setFailureDescription:(id)arg1;
- (void)setPaused:(bool)arg1;
- (void)setProgress:(double)arg1;
- (void)setReferencedItemsDescription:(id)arg1;
- (void)setServiceAction:(long long)arg1;
- (void)setStateDescription:(id)arg1;
- (id)stateDescription;

@end
