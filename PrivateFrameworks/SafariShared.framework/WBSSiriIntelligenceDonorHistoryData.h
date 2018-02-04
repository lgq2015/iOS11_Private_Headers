/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSSiriIntelligenceDonorHistoryData : NSObject {
    NSString * _fullPageText;
    NSDate * _lastVisitedDate;
    NSString * _pageTitle;
    NSURL * _pageURL;
    NSString * _readerText;
    NSString * _userVisibleURLString;
    unsigned long long  _visitCount;
}

@property (nonatomic, copy) NSString *fullPageText;
@property (nonatomic, copy) NSDate *lastVisitedDate;
@property (nonatomic, copy) NSString *pageTitle;
@property (nonatomic, copy) NSURL *pageURL;
@property (nonatomic, copy) NSString *readerText;
@property (nonatomic, copy) NSString *userVisibleURLString;
@property (nonatomic) unsigned long long visitCount;

- (void).cxx_destruct;
- (id)fullPageText;
- (id)lastVisitedDate;
- (id)pageTitle;
- (id)pageURL;
- (id)readerText;
- (void)setFullPageText:(id)arg1;
- (void)setLastVisitedDate:(id)arg1;
- (void)setPageTitle:(id)arg1;
- (void)setPageURL:(id)arg1;
- (void)setReaderText:(id)arg1;
- (void)setUserVisibleURLString:(id)arg1;
- (void)setVisitCount:(unsigned long long)arg1;
- (id)userVisibleURLString;
- (unsigned long long)visitCount;

@end
