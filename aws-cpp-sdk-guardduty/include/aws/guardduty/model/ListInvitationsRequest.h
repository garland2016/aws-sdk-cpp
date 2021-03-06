﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/GuardDutyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace GuardDuty
{
namespace Model
{

  /**
   */
  class AWS_GUARDDUTY_API ListInvitationsRequest : public GuardDutyRequest
  {
  public:
    ListInvitationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListInvitations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * You can use this parameter to indicate the maximum number of invitations you
     * want in the response. The default value is 50. The maximum value is 50.
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * You can use this parameter to indicate the maximum number of invitations you
     * want in the response. The default value is 50. The maximum value is 50.
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * You can use this parameter to indicate the maximum number of invitations you
     * want in the response. The default value is 50. The maximum value is 50.
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * You can use this parameter to indicate the maximum number of invitations you
     * want in the response. The default value is 50. The maximum value is 50.
     */
    inline ListInvitationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline ListInvitationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline ListInvitationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * You can use this parameter when paginating results. Set the value of this
     * parameter to null on your first call to the ListInvitations action. Subsequent
     * calls to the action fill nextToken in the request with the value of NextToken
     * from the previous response to continue listing data.
     */
    inline ListInvitationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
