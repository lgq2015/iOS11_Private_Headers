/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUIAceObjectViewController : UIViewController <SiriUIViewController> {
    AceObject * _aceObject;
    <SiriUIAceObjectViewControllerDelegate> * _delegate;
    bool  _utteranceUserInteractionEnabled;
    bool  _virgin;
}

@property (nonatomic, retain) AceObject *aceObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SiriUIAceObjectViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isUtteranceUserInteractionEnabled, nonatomic) bool utteranceUserInteractionEnabled;
@property (getter=isVirgin, nonatomic, readonly) bool virgin;

- (void).cxx_destruct;
- (void)_aceObjectViewControllerWillBeRemoved;
- (double)_insertionAnimatedZPosition;
- (long long)_insertionAnimation;
- (long long)_pinAnimationType;
- (id)_privateDelegate;
- (long long)_replacementAnimation;
- (void)_setVirgin:(bool)arg1;
- (bool)_shouldSkipAnimationsInAlternateSpeeds;
- (id)aceObject;
- (id)delegate;
- (double)desiredHeight;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (bool)isUtteranceUserInteractionEnabled;
- (bool)isVirgin;
- (bool)removedAfterDialogProgresses;
- (void)setAceObject:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUtteranceUserInteractionEnabled:(bool)arg1;
- (void)siriDidDeactivate;
- (void)siriWillActivateFromSource:(long long)arg1;
- (void)wasAddedToTranscript;

@end
