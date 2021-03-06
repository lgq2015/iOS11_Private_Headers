/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSCloudHistoryVisitIdentifier : NSObject <NSCopying> {
    WBSHistoryItem * _associatedHistoryItem;
    WBSHistoryVisit * _associatedHistoryVisit;
    unsigned long long  _hash;
    NSString * _urlString;
    double  _visitTime;
}

@property (nonatomic, retain) WBSHistoryItem *associatedHistoryItem;
@property (nonatomic, retain) WBSHistoryVisit *associatedHistoryVisit;
@property (nonatomic, readonly, copy) NSString *urlString;
@property (nonatomic, readonly) double visitTime;

- (void).cxx_destruct;
- (id)associatedHistoryItem;
- (id)associatedHistoryVisit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithURLString:(id)arg1 visitTime:(double)arg2;
- (bool)isEqual:(id)arg1;
- (void)setAssociatedHistoryItem:(id)arg1;
- (void)setAssociatedHistoryVisit:(id)arg1;
- (id)urlString;
- (double)visitTime;

@end
