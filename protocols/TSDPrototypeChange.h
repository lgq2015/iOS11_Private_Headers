/* made by EzioChiu.
 */

@protocol TSDPrototypeChange <NSObject>

@required

- (<TSSPropertySource> *)propertiesAfterChange;
- (bool)propertiesAreChanging:(TSSPropertySet *)arg1;
- (<TSSPropertySource> *)propertiesBeforeChange;
- (bool)propertyIsChanging:(int)arg1;
- (id)prototype;
- (bool)prototypeIsBeingDeleted;
- (bool)prototypeIsBeingModified;
- (bool)prototypeIsBeingReplaced;
- (id)replacement;

@end
