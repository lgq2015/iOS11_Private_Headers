/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ServerDocsProtocol.framework/ServerDocsProtocol
 */

@interface SDFRequestUtils : NSObject

+ (id)URIForContentsOfDirectoryWithDocumentIdentifier:(id)arg1 sharepointDocumentIdentifier:(id)arg2 queryItems:(id*)arg3;
+ (id)URIForContentsOfFileWithDocumentIdentifier:(id)arg1 sharepointDocumentIdentifier:(id)arg2 queryItems:(id*)arg3;
+ (id)URIForContentsOfVirtualRootDirectory;
+ (id)URIForReplaceFileWithDocumentIdentifier:(id)arg1 versionIdentifier:(id)arg2 parentDocumentIdentifier:(id)arg3 parentVersionIdentifier:(id)arg4 sharepointDocumentIdentifier:(id)arg5 queryItems:(id*)arg6;
+ (id)URIForWatchWithSharepointDocumentIdentifier:(id)arg1 queryItems:(id*)arg2;
+ (id)URIForWriteFileWithName:(id)arg1 parentDocumentIdentifier:(id)arg2 parentVersionIdentifier:(id)arg3 sharepointDocumentIdentifier:(id)arg4 queryItems:(id*)arg5;
+ (id)_URIFromCommand:(id)arg1;
+ (id)_documentIdentifierFromField:(id)arg1 ofQueryItems:(id)arg2;
+ (id)_documentIdentifierFromURIComponentAtIndex:(unsigned long long)arg1 pathComponents:(id)arg2;
+ (id)_stringFromField:(id)arg1 ofQueryItems:(id)arg2;
+ (id)_versionIdentifierFromField:(id)arg1 ofQueryItems:(id)arg2;
+ (id)commandFromURIComponents:(id)arg1;
+ (id)documentIdentifierFromContentsOfDirectoryURIComponents:(id)arg1;
+ (id)documentIdentifierFromContentsOfFileURIComponents:(id)arg1;
+ (id)documentIdentifierFromReplaceFileURIComponents:(id)arg1;
+ (id)documentIdentifierFromURIQueryItems:(id)arg1;
+ (id)nameFromURIQueryItems:(id)arg1;
+ (id)nameFromWriteFileURIComponents:(id)arg1;
+ (id)parentDocumentIdentifierFromURIQueryItems:(id)arg1;
+ (id)parentDocumentIdentifierFromWriteFileURIComponents:(id)arg1;
+ (id)parentVersionIdentifierFromURIQueryItems:(id)arg1;
+ (id)sharepointDocumentIdentifierFromURIQueryItems:(id)arg1;
+ (id)versionFromURIComponents:(id)arg1;
+ (id)versionIdentifierFromURIQueryItems:(id)arg1;

@end
