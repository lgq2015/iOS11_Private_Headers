/* made by EzioChiu.
 */

@protocol INCreateNoteIntentResponseExport <NSObject, JSExport>

@required

- (long long)code;
- (INNote *)createdNote;
- (void)setCreatedNote:(INNote *)arg1;

@end
