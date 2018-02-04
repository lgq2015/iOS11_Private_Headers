/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryVisit : NSObject {
    bool  _httpNonGet;
    bool  _loadSuccessful;
    WBSCloudHistoryVisit * _redirectDestinationVisit;
    WBSCloudHistoryVisitIdentifier * _redirectDestinationVisitIdentifier;
    WBSCloudHistoryVisit * _redirectSourceVisit;
    WBSCloudHistoryVisitIdentifier * _redirectSourceVisitIdentifier;
    NSString * _title;
    WBSCloudHistoryVisitIdentifier * _visitIdentifier;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (getter=wasHTTPNonGet, nonatomic) bool httpNonGet;
@property (getter=loadWasSuccessful, nonatomic) bool loadSuccessful;
@property (nonatomic) WBSCloudHistoryVisit *redirectDestinationVisit;
@property (nonatomic, copy) WBSCloudHistoryVisitIdentifier *redirectDestinationVisitIdentifier;
@property (nonatomic) WBSCloudHistoryVisit *redirectSourceVisit;
@property (nonatomic, copy) WBSCloudHistoryVisitIdentifier *redirectSourceVisitIdentifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) WBSCloudHistoryVisitIdentifier *visitIdentifier;

- (void).cxx_destruct;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithHistoryVisit:(id)arg1;
- (bool)loadWasSuccessful;
- (id)redirectDestinationVisit;
- (id)redirectDestinationVisitIdentifier;
- (id)redirectSourceVisit;
- (id)redirectSourceVisitIdentifier;
- (void)setHttpNonGet:(bool)arg1;
- (void)setLoadSuccessful:(bool)arg1;
- (void)setRedirectDestinationVisit:(id)arg1;
- (void)setRedirectDestinationVisitIdentifier:(id)arg1;
- (void)setRedirectSourceVisit:(id)arg1;
- (void)setRedirectSourceVisitIdentifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setVisitIdentifier:(id)arg1;
- (id)title;
- (id)visitIdentifier;
- (bool)wasHTTPNonGet;

@end
