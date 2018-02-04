/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPCitationRecord : TSPObject {
    NSString * _authorsString;
    NSString * _endNoteXML;
    bool  _hideAuthorNames;
    bool  _hideYear;
    NSString * _pageRange;
    NSString * _prefix;
    bool  _recordXMLApplied;
    bool  _shouldRemove;
    NSString * _suffix;
    NSString * _title;
    NSString * _type;
    NSString * _year;
}

@property (nonatomic, copy) NSString *authorsString;
@property (nonatomic, readonly) NSString *cacheKey;
@property (nonatomic, copy) NSString *endNoteXML;
@property (nonatomic) bool hideAuthorNames;
@property (nonatomic) bool hideYear;
@property (nonatomic, copy) NSString *pageRange;
@property (nonatomic, copy) NSString *prefix;
@property (nonatomic) bool recordXMLApplied;
@property (nonatomic) bool shouldRemove;
@property (nonatomic, copy) NSString *suffix;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *year;

- (void).cxx_destruct;
- (id)authorYearString;
- (id)authorsString;
- (id)cacheKey;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)endNoteXML;
- (bool)hideAuthorNames;
- (bool)hideYear;
- (bool)isRecordEqual:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (void)p_copyPropertiesToObject:(id)arg1;
- (id)p_endNoteXMLForComparison;
- (id)pageRange;
- (id)prefix;
- (bool)recordXMLApplied;
- (void)saveToArchiver:(id)arg1;
- (void)setAuthorsString:(id)arg1;
- (void)setEndNoteXML:(id)arg1;
- (void)setHideAuthorNames:(bool)arg1;
- (void)setHideYear:(bool)arg1;
- (void)setPageRange:(id)arg1;
- (void)setPrefix:(id)arg1;
- (void)setRecordXMLApplied:(bool)arg1;
- (void)setShouldRemove:(bool)arg1;
- (void)setSuffix:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(id)arg1;
- (void)setYear:(id)arg1;
- (bool)shouldRemove;
- (id)suffix;
- (id)title;
- (id)type;
- (id)year;

@end
