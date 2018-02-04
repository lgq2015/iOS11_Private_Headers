/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@interface RecommendationActionController : NSObject {
    NSString * actionKey;
    NSString * sectionIdentifier;
    TableViewManager * tableManager;
}

@property (nonatomic, retain) NSString *actionKey;
@property (nonatomic, retain) NSString *sectionIdentifier;
@property (nonatomic) TableViewManager *tableManager;

+ (id)recommendationActionControllerWithTableManager:(id)arg1 andAssistantUIViewController:(id)arg2;

- (id)actionKey;
- (id)getSectionInfoWithLongStrings:(bool)arg1;
- (bool)isPrimaryRecommendation;
- (id)sectionIdentifier;
- (void)selectPrimaryRecommendation;
- (void)setActionKey:(id)arg1;
- (void)setSectionIdentifier:(id)arg1;
- (void)setTableManager:(id)arg1;
- (id)tableManager;

@end
