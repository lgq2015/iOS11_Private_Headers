/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface TVRCKeyboardController : NSObject {
    <TVRCKeyboardControllerDelegate> * _delegate;
    <_TVRCKeyboardImpl> * _impl;
}

@property (nonatomic, readonly) TVRCKeyboardAttributes *attributes;
@property (nonatomic) <TVRCKeyboardControllerDelegate> *delegate;
@property (getter=isEditing, nonatomic, readonly) bool editing;
@property (getter=_impl, setter=_setImpl:, nonatomic, retain) <_TVRCKeyboardImpl> *impl;
@property (nonatomic, copy) NSString *text;

- (void).cxx_destruct;
- (void)_beginSessionWithAttributes:(id)arg1;
- (void)_editingSessionBeganWithAttributes:(id)arg1;
- (void)_editingSessionEnded;
- (void)_editingSessionUpdatedAttributes:(id)arg1;
- (void)_editingSessionUpdatedText:(id)arg1;
- (void)_endSession;
- (id)_impl;
- (id)_init;
- (void)_setImpl:(id)arg1;
- (id)attributes;
- (id)delegate;
- (bool)isEditing;
- (void)sendReturnKey;
- (void)setDelegate:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end