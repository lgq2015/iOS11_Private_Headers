/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDCitationTable : NSObject {
    NSMutableDictionary * mCitations;
    WDDocument * mDocument;
}

- (void)addCitation:(id)arg1 forID:(id)arg2;
- (id)citationFor:(id)arg1;
- (id)citationIDs;
- (unsigned long long)count;
- (void)dealloc;
- (id)description;
- (id)document;
- (id)initWithDocument:(id)arg1;

@end
