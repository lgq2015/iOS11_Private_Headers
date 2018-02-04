/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDocumentTextContentProvider : NSObject <SXTextContentProvider> {
    SXDocument * _document;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXDocument *document;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedQueue;

- (void).cxx_destruct;
- (bool)classification:(id)arg1 isValidForType:(unsigned long long)arg2;
- (bool)contentRelevance:(unsigned long long)arg1 isValidForType:(unsigned long long)arg2;
- (id)document;
- (id)initWithDocument:(id)arg1;
- (id)textContentForComponent:(id)arg1 withType:(unsigned long long)arg2;
- (id)textContentForComponents:(id)arg1 withType:(unsigned long long)arg2;
- (void)textContentForType:(unsigned long long)arg1 onCompletion:(id /* block */)arg2;

@end
