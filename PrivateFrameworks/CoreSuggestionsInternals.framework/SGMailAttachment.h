/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMailAttachment : NSObject {
    NSString * _filename;
    bool  _isDownloadedLocally;
    NSString * _path;
    NSString * _type;
}

@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) bool isCalendarMimeType;
@property (nonatomic, readonly) bool isDownloadedLocally;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) NSString *type;

+ (id)attachmentWithType:(id)arg1 filename:(id)arg2 path:(id)arg3;
+ (id)attachmentsFromSearchableItem:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)filename;
- (id)initWithType:(id)arg1 filename:(id)arg2 path:(id)arg3;
- (bool)isCalendarMimeType;
- (bool)isDownloadedLocally;
- (id)path;
- (id)type;

@end
