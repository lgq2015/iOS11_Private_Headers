/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface BCSAction : NSObject <BCSActionPrivate> {
    BCSActionPickerViewAssistant * _actionPickerViewAssistant;
    <BCSParsedDataPrivate> * _data;
    NSURL * _url;
    <BCSActionDelegate> * delegate;
    NSURL * urlThatCanBeOpened;
}

@property (nonatomic, readonly, copy) NSArray *actionPickerItems;
@property (nonatomic, readonly) <BCSParsedDataPrivate> *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly, copy) NSDictionary *debugDescriptionDictionary;
@property (nonatomic, readonly, copy) NSString *defaultActionTargetApplicationBundleIdentifier;
@property (nonatomic) <BCSActionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *localizedActionDescription;
@property (nonatomic, readonly, copy) NSString *localizedDefaultActionDescription;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSURL *urlThatCanBeOpened;

+ (void)getActionWithData:(id)arg1 completionHandler:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)actionPickerItems;
- (id)data;
- (id)debugDescriptionDictionary;
- (id)debugDescriptionExtraInfoDictionary;
- (id)defaultActionTargetApplicationBundleIdentifier;
- (id)delegate;
- (void)determineActionabilityWithCompletionHandler:(id /* block */)arg1;
- (id)extraPreviewText;
- (id)initWithData:(id)arg1;
- (id)localizedActionDescription;
- (id)localizedDefaultActionDescription;
- (void)performAction;
- (void)performDefaultAction;
- (void)setDelegate:(id)arg1;
- (void)showActionPicker;
- (long long)type;
- (id)url;
- (id)urlThatCanBeOpened;

@end
