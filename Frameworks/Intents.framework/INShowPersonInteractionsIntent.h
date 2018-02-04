/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INShowPersonInteractionsIntent : INIntent <INShowPersonInteractionsIntentExport> {
    NSString * _focusItemIdentifier;
    INPerson * _person;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *focusItemIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) INPerson *person;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)focusItemIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithPerson:(id)arg1 focusItemIdentifier:(id)arg2;
- (id)person;
- (void)setFocusItemIdentifier:(id)arg1;
- (void)setPerson:(id)arg1;

@end
