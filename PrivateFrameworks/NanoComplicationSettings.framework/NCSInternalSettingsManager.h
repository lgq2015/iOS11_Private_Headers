/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
 */

@interface NCSInternalSettingsManager : NSObject {
    NSMutableArray * _complicationDefinitions;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _selectedComplicationIdentifier;
    NSArray * _storedSettings;
    NPSManager * _syncManager;
}

@property (nonatomic, readonly) bool hasSettings;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) NSString *selectedComplicationIdentifier;

- (void).cxx_destruct;
- (id)_localizedNameForComplication:(id)arg1;
- (unsigned long long)_numberOfActiveComplications;
- (void)_saveSettings;
- (void)addComplicationDefinition:(id)arg1;
- (id)complicationDefinitionForAppBundleIdentifier:(id)arg1;
- (id)complicationDefinitionForComplicationIdentifier:(id)arg1;
- (id)complicationDefinitionForWatchKitIdentifier:(id)arg1;
- (id)complicationIdentifierForComplicationDefinitionAtIndex:(unsigned long long)arg1;
- (void)enumerateAllComplicationDefinitionsUsingBlock:(id /* block */)arg1;
- (void)enumerateComplicationDefinitionsUsingBlock:(id /* block */)arg1;
- (bool)hasSettings;
- (id)init;
- (void)loadSettings;
- (void)moveComplicationDefinitionFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (id)queue;
- (void)removeComplicationDefinitionsInArray:(id)arg1;
- (void)saveSettings;
- (id)selectedComplicationIdentifier;
- (void)setSelectedComplicationIdentifier:(id)arg1;

@end
