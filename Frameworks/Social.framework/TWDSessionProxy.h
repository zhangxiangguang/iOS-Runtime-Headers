/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/Social.framework/Social
 */

@interface TWDSessionProxy : NSObject <XPCProxyTarget> {
}


- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;
- (void)showTwitterSettingsIfNeeded:(id)arg1;
- (void)fetchCurrentTCoLength:(id)arg1;
- (void)getPermaLinkFromLastStatusUpdate:(id)arg1;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (void)fetchGeotagStatus:(id)arg1;
- (void)setOverrideGeotagInfo:(id)arg1;
- (void)setGeotagStatus:(id)arg1;
- (void)fetchRelationshipWithScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)fetchRecordForScreenName:(id)arg1 completion:(id)arg2;
- (void)fetchSessionInfo:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)checkIn:(id)arg1;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;

@end